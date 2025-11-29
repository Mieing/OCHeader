@class TTVideoEngineURLInfo, NSMutableArray;

@interface TTVideoEngineURLInfoMap : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TTVideoEngineURLInfo *video1;
@property (retain, nonatomic) TTVideoEngineURLInfo *video2;
@property (retain, nonatomic) TTVideoEngineURLInfo *video3;
@property (retain, nonatomic) TTVideoEngineURLInfo *video4;
@property (retain, nonatomic) TTVideoEngineURLInfo *video5;
@property (retain, nonatomic) TTVideoEngineURLInfo *video6;
@property (retain, nonatomic) TTVideoEngineURLInfo *video7;
@property (retain, nonatomic) TTVideoEngineURLInfo *video8;
@property (retain, nonatomic) NSMutableArray *videoInfoList;
@property (nonatomic) long long videoModelVersion;

- (id)initWithDictionary:(id)a0 mediaType:(id)a1 key:(id)a2;
- (void)setUpResolutionMap:(id)a0;
- (id)videoForResolutionType:(unsigned long long)a0 otherCondition:(id)a1;
- (id)videoForBitrate:(long long)a0 mediaType:(id)a1;
- (id)getUrlInfoWithMediaInfoId:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 mediaType:(id)a1;

@end
