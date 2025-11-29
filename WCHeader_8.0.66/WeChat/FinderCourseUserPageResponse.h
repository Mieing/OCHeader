@class NSData, NSMutableArray, BaseResponse;

@interface FinderCourseUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *courseInfo;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
