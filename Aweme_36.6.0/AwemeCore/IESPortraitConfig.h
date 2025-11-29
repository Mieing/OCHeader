@interface IESPortraitConfig : NSObject

@property (readonly, nonatomic) BOOL needSave;
@property (readonly, nonatomic) long long minSaveGapMs;

- (id)initWithBool:(BOOL)a0 MS:(long long)a1;
- (id)initWithBool:(BOOL)a0;

@end
