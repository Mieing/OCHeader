@class NSString;

@interface MMLiveCastViewItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL showsTopSeparatorLine;
@property (nonatomic) BOOL showsBottomSeparatorLine;
@property (copy, nonatomic) id /* block */ didSelectBlock;

- (void)didSelect;
- (void).cxx_destruct;

@end
