@class NSString, NSArray, NSDictionary;

@interface TTBridgeRegisterMaker : NSObject

@property (nonatomic) unsigned long long authTypeValue;
@property (copy, nonatomic) NSString *pluginNameValue;
@property (copy, nonatomic) NSString *bridgeNameValue;
@property (copy, nonatomic) NSString *methodNamespaceValue;
@property (nonatomic) long long engineTypeValue;
@property (copy, nonatomic) NSArray *privateDomainsValue;
@property (copy, nonatomic) id /* block */ handlerValue;
@property (copy, nonatomic) id /* block */ handlerWithCommandValue;
@property (copy, nonatomic) NSDictionary *extraInfoValue;
@property (readonly, copy, nonatomic) id /* block */ authType;
@property (readonly, copy, nonatomic) id /* block */ pluginName;
@property (readonly, copy, nonatomic) id /* block */ bridgeName;
@property (readonly, copy, nonatomic) id /* block */ methodNamespace;
@property (readonly, copy, nonatomic) id /* block */ engineType;
@property (readonly, copy, nonatomic) id /* block */ privateDomains;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) id /* block */ handlerWithCommand;
@property (readonly, copy, nonatomic) id /* block */ extraInfo;

- (void).cxx_destruct;

@end
