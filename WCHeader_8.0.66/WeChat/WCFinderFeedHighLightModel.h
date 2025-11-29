@class NSString, NSMutableArray;

@interface WCFinderFeedHighLightModel : NSObject

@property (retain, nonatomic) NSString *normalNickName;
@property (retain, nonatomic) NSMutableArray *nameHightkeywords;
@property (retain, nonatomic) NSString *normalText;
@property (retain, nonatomic) NSMutableArray *textHightkeywords;
@property (nonatomic) BOOL isHidePostTimeLabel;

+ (id)formatMediaTitle:(id)a0;

- (void)updateWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
