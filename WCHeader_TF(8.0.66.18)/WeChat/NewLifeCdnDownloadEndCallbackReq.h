@class NSString, FlutterStandardTypedData;

@interface NewLifeCdnDownloadEndCallbackReq : NSObject

@property (copy, nonatomic) NSString *mediaId;
@property (nonatomic) long long errCode;
@property (retain, nonatomic) FlutterStandardTypedData *cdnOriginResultByteArray;

+ (id)makeWithMediaId:(id)a0 errCode:(long long)a1 cdnOriginResultByteArray:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
