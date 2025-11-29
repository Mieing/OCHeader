@class NSNumber, NSString;

@interface AWEStudioComposerBizTempModel : NSObject <NSCopying, AWEStudioComposerBizTempModelProtocol>

@property (nonatomic) long long currentComposerRecordType;
@property (copy, nonatomic) NSNumber *albumEditUseOriginAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
