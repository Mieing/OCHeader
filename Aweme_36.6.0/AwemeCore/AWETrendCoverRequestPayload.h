@class NSError, AWEAwemeModel;

@interface AWETrendCoverRequestPayload : NSObject

@property (nonatomic) long long index;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double duration;

- (void).cxx_destruct;

@end
