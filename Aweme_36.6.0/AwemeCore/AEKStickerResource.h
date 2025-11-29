@class ACCURS, NSString;

@interface AEKStickerResource : NSObject

@property (readonly, nonatomic) ACCURS *urs;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned long long resourceType;

- (id)initWithURS:(id)a0 filePath:(id)a1 resourceType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
