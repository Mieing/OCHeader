@class NSString, NSMutableArray, BaseResponse;

@interface StoryUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (nonatomic) unsigned int objCount;
@property (retain, nonatomic) NSMutableArray *objList;
@property (nonatomic) unsigned int objTotalCount;
@property (nonatomic) unsigned int objLast24HoursCount;
@property (nonatomic) unsigned int newRequestTime;
@property (nonatomic) unsigned long long limitedId;

+ (void)initialize;

@end
