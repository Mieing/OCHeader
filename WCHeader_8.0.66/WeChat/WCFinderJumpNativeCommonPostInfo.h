@class NSString, NSArray;

@interface WCFinderJumpNativeCommonPostInfo : NSObject

@property (nonatomic) int postToComment;
@property (copy, nonatomic) NSString *songId;
@property (copy, nonatomic) NSString *audioId;
@property (copy, nonatomic) NSString *miaojianMusicId;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateMusicId;
@property (nonatomic) long long templateType;
@property (retain, nonatomic) NSArray *topics;
@property (nonatomic) int buttonAction;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (BOOL)enablePostToComment;
- (void).cxx_destruct;

@end
