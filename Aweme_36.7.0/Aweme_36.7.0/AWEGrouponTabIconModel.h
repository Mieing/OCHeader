@class AWEURLModel;

@interface AWEGrouponTabIconModel : AWEBaseApiModel

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) AWEURLModel *image;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
