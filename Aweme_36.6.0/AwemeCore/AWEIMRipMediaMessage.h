@class NSString;

@interface AWEIMRipMediaMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (nonatomic) int ripMediaType;
@property (nonatomic) BOOL isLivePhotoMode;
@property (readonly, nonatomic) long long originMessageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)realMessageType;
- (id)initWithContentDict:(id)a0;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)initWithContentDict:(id)a0 andOriginalType:(long long)a1;
- (int)p_CoventAWEIMMessageTypeToAWEIMRipMediaMessageSubType:(long long)a0;
- (id)supportMessageMenuTypeList;
- (id)displayText;

@end
