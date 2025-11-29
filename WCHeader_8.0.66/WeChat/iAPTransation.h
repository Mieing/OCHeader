@class NSString;

@interface iAPTransation : NSObject

@property (retain, nonatomic) NSString *nsProductID;
@property (retain, nonatomic) NSString *nsTransationID;
@property (retain, nonatomic) NSString *nsSerialID;
@property (nonatomic) unsigned int iRequestType;
@property (nonatomic) unsigned int iBizType;

- (id)description;
- (void).cxx_destruct;

@end
