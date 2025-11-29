@protocol AWEStorageServiceKVInterface;

@interface AWEHPProfileSideBarStorage : NSObject

@property (class, readonly, nonatomic) id<AWEStorageServiceKVInterface> mainKVHandler;

@end
