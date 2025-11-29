@class NSString, NSMutableAttributedString, NSArray;

@interface IESLiveSoloKTVSmallViewDialogConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSMutableAttributedString *titleAttributedString;
@property (copy, nonatomic) NSArray *buttonTitles;
@property (copy, nonatomic) NSArray *actionBlocks;
@property (copy, nonatomic) NSArray *actionStyles;

- (void).cxx_destruct;

@end
