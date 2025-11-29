@class NSArray, NSString;

@interface IESECTabKitTabBarIndicatorStyle : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long displayMode;
@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
