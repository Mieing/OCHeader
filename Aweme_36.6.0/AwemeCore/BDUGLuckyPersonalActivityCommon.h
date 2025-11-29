@class BDUGLuckyTimeTable;

@interface BDUGLuckyPersonalActivityCommon : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckyTimeTable *timeTable;
@property (nonatomic) BOOL canshow;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
