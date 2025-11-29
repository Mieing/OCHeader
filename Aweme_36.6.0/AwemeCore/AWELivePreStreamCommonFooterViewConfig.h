@class NSString, NSArray;

@interface AWELivePreStreamCommonFooterViewConfig : NSObject

@property (copy, nonatomic) NSString *mainText;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *tagText;
@property (retain, nonatomic) NSArray *userListArray;
@property (copy, nonatomic) id /* block */ didClickBtn;
@property (copy, nonatomic) id /* block */ didClickMask;
@property (copy, nonatomic) id /* block */ didLongPress;
@property (copy, nonatomic) NSString *guideScene;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL hasScrollInnerFeed;

- (void).cxx_destruct;

@end
