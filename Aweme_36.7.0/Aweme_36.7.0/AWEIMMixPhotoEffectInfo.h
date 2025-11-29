@class NSString;

@interface AWEIMMixPhotoEffectInfo : NSObject

@property (readonly, copy, nonatomic) NSString *stickerID;
@property (readonly, copy, nonatomic) NSString *coverURL;
@property (readonly, nonatomic) long long maxMamber;
@property (readonly, nonatomic) BOOL isLora;
@property (readonly, copy, nonatomic) NSString *loraStyleID;
@property (copy, nonatomic) NSString *aiLoraID;

- (id)initWithLoraStickerID:(id)a0 coverURL:(id)a1 maxMember:(long long)a2;
- (id)initWithLoraStickerID:(id)a0 coverURL:(id)a1 maxMember:(long long)a2 loraStyleID:(id)a3;
- (void).cxx_destruct;

@end
