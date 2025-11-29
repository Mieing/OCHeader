@class NSData, WNContentStorage;

@interface WNSecurityInfo : NSObject

@property (nonatomic) int opType;
@property (nonatomic) unsigned int localId;
@property (retain, nonatomic) NSData *noteImageData;
@property (retain, nonatomic) WNContentStorage *storage;

- (void).cxx_destruct;

@end
