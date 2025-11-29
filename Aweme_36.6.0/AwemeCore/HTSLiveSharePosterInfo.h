@class HTSLiveSharePosterInfo_PosterData;

@interface HTSLiveSharePosterInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveSharePosterInfo_PosterData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
