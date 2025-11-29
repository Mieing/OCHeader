@class NSString;
@protocol AWEContactLocalSearchManagerProtocol;

@interface IESIMContactLocalSearchManager : NSObject <IESIMContactLocalSearchManagerProtocol>

@property (copy, nonatomic) id /* block */ searchCompletion;
@property (retain, nonatomic) id<AWEContactLocalSearchManagerProtocol> searchManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
