@interface BDFileUploadTool : NSObject

+ (id)signatureAwsHeaders:(id)a0 queryMap:(id)a1 accessKey:(id)a2 secretKey:(id)a3 serviceName:(id)a4 httpMethod:(long long)a5 regionName:(id)a6;
+ (id)signatureAwsHeaders:(id)a0 queryMap:(id)a1 accessKey:(id)a2 secretKey:(id)a3 serviceName:(id)a4 httpMethod:(long long)a5 regionName:(id)a6 content:(id)a7;
+ (id)signatureAwsHeaders:(id)a0 queryMapArrary:(id)a1 accessKey:(id)a2 secretKey:(id)a3 serviceName:(id)a4 httpMethod:(long long)a5 regionName:(id)a6 content:(id)a7;
+ (id)jsonSerialization:(id)a0;
+ (id)jsonDeserialization:(id)a0;
+ (id)contextDirPath;
+ (id)retryStatesDirPath;
+ (id)createDirPath:(id)a0;
+ (id)uuidString;
+ (id)cacheDirPath;
+ (id)getLogFilePath;

@end
