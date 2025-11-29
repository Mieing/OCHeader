@class NSArray, NSString;

@interface AWELiveiosClientComponent : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *fragmentsArray;
@property (retain, nonatomic) NSArray *elementsArray;
@property (retain, nonatomic) NSArray *landscapeLayoutArray;
@property (retain, nonatomic) NSArray *portraitLayoutArray;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) long long templateId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseClientComponentFromOriginRoomModel:(id)a0;

- (void).cxx_destruct;

@end
