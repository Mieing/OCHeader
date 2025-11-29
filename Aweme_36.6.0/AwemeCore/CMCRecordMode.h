@interface CMCRecordMode : NSObject

@property (nonatomic) unsigned long long modeId;
@property (nonatomic) long long lengthMode;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isPhoto;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
