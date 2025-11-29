@interface VideoTemplateDevice : NSObject

@property (copy, nonatomic) id /* block */ worseThan6sJudger;

+ (void)registerWorseThanIPhone6sJudger:(id /* block */)a0;
+ (BOOL)isWorseThanIPhone6s;
+ (id)shared;

- (void).cxx_destruct;

@end
