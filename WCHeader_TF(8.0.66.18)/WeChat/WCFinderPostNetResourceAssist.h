@class NSString;

@interface WCFinderPostNetResourceAssist : NSObject

@property (retain, nonatomic) NSString *tid;
@property (copy, nonatomic) id /* block */ resolver;

+ (id)resolveHttpURL:(id)a0 format:(id)a1;
+ (id)netImageExistedPath:(id)a0 downloadView:(id)a1 downloadOptions:(long long)a2;
+ (id)netVideoFetchPromise:(id)a0 cancelToken:(id)a1;
+ (id)getPostApplyLocalVideoUrlByMediaInfo:(id)a0;

- (id)initWithDataItemTid:(id)a0 resolver:(id /* block */)a1;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)a0;
- (void).cxx_destruct;

@end
