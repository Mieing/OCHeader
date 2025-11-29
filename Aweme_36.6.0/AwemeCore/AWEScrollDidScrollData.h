@class AWEAwemeModel;

@interface AWEScrollDidScrollData : NSObject

@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEAwemeModel *nextModel;
@property (nonatomic) double percentage;

- (void).cxx_destruct;

@end
