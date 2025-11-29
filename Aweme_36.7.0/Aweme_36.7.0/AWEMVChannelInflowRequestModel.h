@class NSString, NSNumber;

@interface AWEMVChannelInflowRequestModel : NSObject

@property (nonatomic) unsigned long long cardType;
@property (nonatomic) long long horizontalType;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSString *videoType;
@property (copy, nonatomic) NSString *recallReasonType;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *inflowRecallType;

- (void).cxx_destruct;

@end
