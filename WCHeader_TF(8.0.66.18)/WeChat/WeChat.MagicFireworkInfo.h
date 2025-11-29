@class NSString;

@interface WeChat.MagicFireworkInfo : WeChat.MEBaseMeta {
    void /* unknown type, empty encoding */ fireworkText;
    void /* unknown type, empty encoding */ fireworkEmojiKey;
}

@property (nonatomic) void /* unknown type, empty encoding */ fireworkType;
@property (nonatomic, copy) NSString *fireworkText;
@property (nonatomic, copy) NSString *fireworkEmojiKey;
@property (nonatomic) void /* unknown type, empty encoding */ hasFireworkTrail;
@property (nonatomic) void /* unknown type, empty encoding */ randomSeed;
@property (nonatomic, readonly) NSString *description;

- (id)initWithId:(id)a0 timestamp:(unsigned long long)a1 fireworkType:(long long)a2 fireworkText:(id)a3 fireworkEmojiKey:(id)a4 hasFireworkTrail:(BOOL)a5 randomSeed:(unsigned int)a6 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7;
- (id)toDictionary;
- (id)init;
- (void).cxx_destruct;

@end
