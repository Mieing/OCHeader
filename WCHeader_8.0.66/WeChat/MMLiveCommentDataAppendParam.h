@interface MMLiveCommentDataAppendParam : NSObject

@property (nonatomic) unsigned int refreshCommentCount;
@property (nonatomic) BOOL isCustomAppendAllData;
@property (nonatomic) BOOL unableSynchronizeBack;

+ (id)createAppendParamWithRefreshCommentCnt:(unsigned int)a0 isCustomAppendAll:(BOOL)a1;

@end
