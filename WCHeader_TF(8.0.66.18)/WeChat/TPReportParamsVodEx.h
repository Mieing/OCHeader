@class NSString;

@interface TPReportParamsVodEx : NSObject <ITPReportParams>

@property (nonatomic) long long freetype;
@property (nonatomic) long long currentplay;
@property (nonatomic) long long optimizedplay;
@property (nonatomic) long long subtitles;
@property (nonatomic) long long selsubtitles;
@property (nonatomic) BOOL multitrack;
@property (nonatomic) long long bizid;
@property (nonatomic) long long clip;
@property (nonatomic) long long hevclv;
@property (nonatomic) long long status;
@property (nonatomic) BOOL vip;
@property (nonatomic) long long hitdownloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setErrorCode:(id)a0;

@end
