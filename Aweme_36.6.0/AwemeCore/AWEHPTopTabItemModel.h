@class NSNumber, NSString, NSDictionary;

@interface AWEHPTopTabItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL movable;
@property (retain, nonatomic) NSNumber *dragType;
@property (copy, nonatomic) NSString *channelType;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isLandTab;
@property (nonatomic) BOOL isMainTab;
@property (copy, nonatomic) NSDictionary *channelInfo;
@property (nonatomic) BOOL deletable;
@property (nonatomic) unsigned long long editDragType;
@property (nonatomic) long long limitTitleModify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
