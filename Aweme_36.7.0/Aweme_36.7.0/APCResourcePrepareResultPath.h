@class NSString, NSError;

@interface APCResourcePrepareResultPath : NSObject

@property (readonly, nonatomic) unsigned long long photoType;
@property (readonly, nonatomic) NSString *originalPath;
@property (readonly, nonatomic) NSString *folder;
@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) NSString *targetPath;
@property (readonly, nonatomic) NSError *error;

- (id)errorInfo;
- (BOOL)isPhotoItem;
- (id)initWithPath:(id)a0 folder:(id)a1 tag:(id)a2 index:(long long)a3;
- (void).cxx_destruct;

@end
