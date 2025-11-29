@class NSString;

@interface AWEContinuePlayProgressRecordModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double playProgress;
@property (nonatomic) double lastModifiedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
