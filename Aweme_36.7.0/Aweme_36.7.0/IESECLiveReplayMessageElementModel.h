@class NSString, NSNumber;

@interface IESECLiveReplayMessageElementModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long elementType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *avatarURL;
@property (retain, nonatomic) NSNumber *blankWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
