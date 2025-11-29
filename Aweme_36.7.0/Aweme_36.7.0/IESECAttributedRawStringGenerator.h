@class NSString, NSAttributedString;

@interface IESECAttributedRawStringGenerator : NSObject <IESECAttributedGeneratorProtocol>

@property (retain, nonatomic) NSAttributedString *attrStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
