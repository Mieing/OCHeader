@class NSString, NSMutableArray;

@interface BigThumbV2 : GPBMessage

@property (nonatomic) long long imgNum;
@property (nonatomic) BOOL hasImgNum;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) BOOL hasUri;
@property (copy, nonatomic) NSString *imgURL;
@property (nonatomic) BOOL hasImgURL;
@property (nonatomic) long long imgXSize;
@property (nonatomic) BOOL hasImgXSize;
@property (nonatomic) long long imgYSize;
@property (nonatomic) BOOL hasImgYSize;
@property (nonatomic) long long imgXLen;
@property (nonatomic) BOOL hasImgXLen;
@property (nonatomic) long long imgYLen;
@property (nonatomic) BOOL hasImgYLen;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double interval;
@property (nonatomic) BOOL hasInterval;
@property (copy, nonatomic) NSString *fext;
@property (nonatomic) BOOL hasFext;
@property (retain, nonatomic) NSMutableArray *urisArray;
@property (readonly, nonatomic) unsigned long long urisArray_Count;
@property (retain, nonatomic) NSMutableArray *imgUrlsArray;
@property (readonly, nonatomic) unsigned long long imgUrlsArray_Count;

+ (id)descriptor;

@end
