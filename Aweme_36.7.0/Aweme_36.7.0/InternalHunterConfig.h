@class NSString;

@interface InternalHunterConfig : NSObject <AWECommentInputHunterConfigProtocol>

@property (nonatomic) BOOL enableAt;
@property (nonatomic) BOOL enableEmoji;
@property (nonatomic) BOOL enableGif;
@property (nonatomic) BOOL enableImage;
@property (nonatomic) BOOL enableSendButton;
@property (nonatomic) long long textInputMaxLength;
@property (copy, nonatomic) NSString *placeHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParamModel:(id)a0;
- (void).cxx_destruct;

@end
