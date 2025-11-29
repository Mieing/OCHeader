@class NSNumber, NSString;

@interface IESECLiveToggleAuthor : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *authorID;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *secAuthorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
