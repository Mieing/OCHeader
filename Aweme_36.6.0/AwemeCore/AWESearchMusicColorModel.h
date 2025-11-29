@class NSString;

@interface AWESearchMusicColorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long videoTitlePosBegin;
@property (nonatomic) long long videoTitlePosEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
