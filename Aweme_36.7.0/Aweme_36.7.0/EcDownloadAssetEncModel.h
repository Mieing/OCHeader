@class NSString, NSArray;

@interface EcDownloadAssetEncModel : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSArray *chunks;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
