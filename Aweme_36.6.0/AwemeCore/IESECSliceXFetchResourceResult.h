@class NSError, IESECSliceXResourceLoadInfo, IESECSliceXTemplatePackage;

@interface IESECSliceXFetchResourceResult : NSObject <NSCopying>

@property (retain, nonatomic) IESECSliceXTemplatePackage *templatePackage;
@property (retain, nonatomic) IESECSliceXResourceLoadInfo *loadInfo;
@property (retain, nonatomic) NSError *error;

- (id)initWithPackage:(id)a0 loadInfo:(id)a1 error:(id)a2;
- (id)initWithCached:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
