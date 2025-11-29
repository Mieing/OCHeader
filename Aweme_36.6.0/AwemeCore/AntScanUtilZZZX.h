@class NSMutableArray;

@interface AntScanUtilZZZX : NSObject

@property (retain, nonatomic) NSMutableArray *outputInfos;
@property (retain, nonatomic) NSMutableArray *inputRules;

+ (id)getOutputInfo;

- (id)valueStr:(id)a0;
- (BOOL)modifyDict:(id)a0;
- (void)initInputRule:(struct input_rule { char *x0; unsigned char x1[36]; unsigned char x2[36]; char *x3; char *x4; char *x5; } *)a0 withType:(int)a1 andString:(id)a2;
- (void)freeLibNames:(char **)a0 withSize:(int)a1;
- (void)freeInputRule:(struct input_rule { char *x0; unsigned char x1[36]; unsigned char x2[36]; char *x3; char *x4; char *x5; } *)a0 withSize:(int)a1;
- (void)initOutputInfo:(struct output_info { char *x0; long long x1; long long x2; char x3[36]; char x4[44]; char *x5; int x6; char x7[36]; char x8[36]; } *)a0 withSize:(int)a1;
- (void)freeOutputInfo:(struct output_info { char *x0; long long x1; long long x2; char x3[36]; char x4[44]; char *x5; int x6; char x7[36]; char x8[36]; } *)a0 withSize:(int)a1;
- (void)initInputRules:(struct input_rule { char *x0; unsigned char x1[36]; unsigned char x2[36]; char *x3; char *x4; char *x5; } *)a0 withArray:(id)a1;
- (void)generateOutputInfos:(struct output_info { char *x0; long long x1; long long x2; char x3[36]; char x4[44]; char *x5; int x6; char x7[36]; char x8[36]; } *)a0 withSize:(int)a1;
- (BOOL)startScan:(id)a0;
- (void)saveOutputInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
