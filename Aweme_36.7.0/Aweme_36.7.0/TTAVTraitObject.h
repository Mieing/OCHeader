@interface TTAVTraitObject : NSObject {
    int _type;
    int _version;
    struct RefPtr<vcloud::ttplayer::TraitObject> { struct TraitObject *mValue; } _obj;
}

@property (nonatomic) long long nativeObj;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int version;

- (id)initWithType:(int)a0 andObj:(long long)a1;
- (long long)takeNativeObj;
- (void)releaseObj;
- (id)initWithType:(int)a0 andVersion:(int)a1;
- (BOOL)sameAs:(id)a0;
- (void)saveRecycleObj:(struct RefPtr<vcloud::ttplayer::TraitObject> { struct TraitObject *x0; })a0;
- (struct RefPtr<vcloud::ttplayer::TraitObject> { struct TraitObject *x0; })getRecycleObj;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
