@class NSString;

@interface BizTextCoverEditorParams : NSObject

@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (copy, nonatomic) NSString *draftPrompt;
@property (copy, nonatomic) NSString *draftPicId;
@property (nonatomic) long long editScene;

- (void).cxx_destruct;

@end
