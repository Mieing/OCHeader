@interface WSPersonalizedRecommendManager : NSObject {
    void /* unknown type, empty encoding */ mappedKV;
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ provider;
}

@property (nonatomic) BOOL localValue;

- (id)getServerValue;
- (id)setServerValueWithIsOn:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
