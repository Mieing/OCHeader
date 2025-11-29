@protocol UnisusPackage;

@interface UnisusPluginInfo : NSObject {
    struct version_t { unsigned int value; } version_;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) id<UnisusPackage> pkg;

- (id)init:(void *)a0;
- (void).cxx_destruct;
- (id)version;
- (id).cxx_construct;

@end
