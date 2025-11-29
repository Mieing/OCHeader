@class NSString, NSDictionary;

@interface WAChatToolMaterial : NSObject

@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) long long timeStamp;
@property (nonatomic) long long msgLocalId;
@property (retain, nonatomic) NSDictionary *materialInfo;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long size;
@property (retain, nonatomic) NSString *content;

- (id)init;
- (void).cxx_destruct;

@end
