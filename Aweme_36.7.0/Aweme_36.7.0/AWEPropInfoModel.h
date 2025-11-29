@class NSString;

@interface AWEPropInfoModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *stickerType;
@property (nonatomic) double stickerDefaultCoverFrameTimestamp;
@property (copy, nonatomic) NSString *effectUgcPath;
@property (copy, nonatomic) NSString *md5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
