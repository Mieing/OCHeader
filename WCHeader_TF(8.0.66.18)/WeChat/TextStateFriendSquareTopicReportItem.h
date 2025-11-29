@class NSString;

@interface TextStateFriendSquareTopicReportItem : NSObject

@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *iconCustomDescription;
@property (nonatomic) unsigned int iconType;
@property (nonatomic) unsigned long long userCount;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
