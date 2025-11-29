@class NSString;

@interface MMFinderLiveConcertInfo : NSObject

@property (nonatomic) BOOL isConcert;
@property (retain, nonatomic) NSString *concertActivityId;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic) unsigned long long topicType;

+ (id)concertInfoWithBackendModel:(id)a0;

- (void).cxx_destruct;

@end
