@class IESECSliceXResourceLoadInfo, NSString, IESECSliceXResourceMetaData, NSDictionary, IESECSliceXInstance;

@interface IESECSliceXContainerInfo : NSObject

@property (copy, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) IESECSliceXResourceMetaData *metaData;
@property (weak, nonatomic) IESECSliceXInstance *sliceXInstance;
@property (retain, nonatomic) IESECSliceXResourceLoadInfo *loadInfo;
@property (retain, nonatomic) NSDictionary *globalProps;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
