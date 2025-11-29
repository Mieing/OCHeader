@class NSString, NSArray;

@interface AWEPublishMergeImageResult : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *results;

- (void).cxx_destruct;

@end
