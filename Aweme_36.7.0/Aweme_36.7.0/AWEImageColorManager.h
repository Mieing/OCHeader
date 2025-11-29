@interface AWEImageColorManager : NSObject <AWEImageColorManager> {
    void /* unknown type, empty encoding */ pixelDataCount;
    void /* unknown type, empty encoding */ colorList;
    void /* unknown type, empty encoding */ targetList;
    void /* unknown type, empty encoding */ maxColorValue;
    void /* unknown type, empty encoding */ selectedSwatchesDic;
    void /* unknown type, empty encoding */ colorBlock;
    void /* unknown type, empty encoding */ dicBlock;
    void /* unknown type, empty encoding */ analyzeQueue;
}

- (void)analyzeImages:(id)a0 dicBlock:(id /* block */)a1;
- (void)analyzeImages:(id)a0 targetType:(long long)a1 colorBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
