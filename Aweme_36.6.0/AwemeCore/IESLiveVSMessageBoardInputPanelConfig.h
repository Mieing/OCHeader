@class NSString, NSArray;

@interface IESLiveVSMessageBoardInputPanelConfig : NSObject

@property (nonatomic) long long limitCount;
@property (nonatomic) BOOL isPlayback;
@property (copy, nonatomic) NSString *backgroundColorStr;
@property (nonatomic) long long titleType;
@property (copy, nonatomic) NSString *titleImageURLStr;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *titleColorStr;
@property (copy, nonatomic) NSString *inputViewBackgroundColorStr;
@property (copy, nonatomic) NSString *inputPlaceholderStr;
@property (copy, nonatomic) NSString *inputPlaceholderColorStr;
@property (copy, nonatomic) NSString *inputTextColorStr;
@property (retain, nonatomic) NSString *contentDraft;
@property (copy, nonatomic) NSArray *userImageURLS;
@property (copy, nonatomic) NSString *userTitle;
@property (nonatomic) BOOL shouldHiddenRedDotRecord;
@property (nonatomic) BOOL shouldDressUpButtonActive;

- (void)setupDefaultConfig;
- (void)updateConfigWithParams:(id)a0;
- (void)redDotRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
