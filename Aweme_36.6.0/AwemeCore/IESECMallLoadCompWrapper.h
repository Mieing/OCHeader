@class NSString, Protocol;
@protocol IESECMallComponentProtocol;

@interface IESECMallLoadCompWrapper : NSObject

@property (retain, nonatomic) Class cls;
@property (retain, nonatomic) id<IESECMallComponentProtocol> componentInstance;
@property (retain, nonatomic) Protocol *protocol;
@property (copy, nonatomic) NSString *desc;

+ (id)compWrapperWithClass:(Class)a0 instance:(id)a1 protocol:(id)a2 desc:(id)a3;

- (id)initWithClass:(Class)a0 instance:(id)a1 protocol:(id)a2 desc:(id)a3;
- (void).cxx_destruct;

@end
