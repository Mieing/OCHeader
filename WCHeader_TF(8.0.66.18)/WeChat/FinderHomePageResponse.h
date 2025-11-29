@class FinderHomePageSectionData, BaseResponse;

@interface FinderHomePageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderHomePageSectionData *sectionData;

+ (void)initialize;

@end
