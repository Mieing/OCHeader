@class NSString;

@interface IESECFeedResourceCardBaseNode : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
